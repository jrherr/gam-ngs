/*! 
 * \file Read.hpp
 * \brief Definition of Read class.
 * \details This file contains the definition of the class representing a read.
 */

#ifndef READS_HPP
#define	READS_HPP

#include <map>
#include <string>

#include "api/BamReader.h"

#include "types.hpp"
#include "google/sparse_hash_map"

using namespace BamTools;
using google::sparse_hash_map;

//! Class implementing a read.
class Read 
{

private: 
    IdType _contigId;   //!< contig's identifier.
    IdType _startPos;   //!< starting position (0-based) of the read inside the contig.
    IdType _endPos;     //!< ending position (0-based) of the read inside the contig.
    bool _isRev;        //!< whether the read is reverse complemented or not.

public:
    //! A constructor with no arguments.
    Read();
    
    //! A copy constructor.
    /*!
     * Creates a copy of a read.
     * \param orig a Read object.
     */
    Read(const Read &orig);
    
    //! A constructor which sets the read's attributes.
    /*! 
     * \param ctg       contig's identifier
     * \param sPos      starting position (0-based) inside the contig
     * \param ePos      end position (0-based) inside the contig
     * \param rev       \c true if the read is reverse complemented
     */
    Read(const IdType ctg, const IdType sPos, const IdType ePos, const bool rev = false);
    
    //! Returns contig's identifier.
    /*!
     * \return contig's identifier.
     */
    IdType getContigId() const;
    
    //! Returns starting position of the read in the contig
    /*!
     * \return starting position (0-based)
     */
    IdType getStartPos() const;
    
    //! Returns ending position of the read in the contig
    /*!
     * \return ending position (0-based)
     */
    IdType getEndPos() const;
    
    //! Returns the length of the read.
    /*!
     * \return read's length
     */
    IntType getLength() const;
    
    //! Returns whether the read is reverse complemented or not.
    /*!
     * \return \c true if the read is reverse complemented, \c false otherwise.
     */
    bool isReverse();
    
    static void getReadMap( BamReader &bamMaster, BamReader &bamSlave, sparse_hash_map< std::string, Read > &readMap );
};

#endif	/* READS_HPP */

